VERSION 5.00
Begin VB.Form Form4 
   BackColor       =   &H00C0E0FF&
   Caption         =   "multiplicando..."
   ClientHeight    =   3450
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5640
   Icon            =   "Multiplicando.frx":0000
   LinkTopic       =   "Form3"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   3450
   ScaleWidth      =   5640
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command2 
      Caption         =   "Limpiar"
      BeginProperty Font 
         Name            =   "Comic Sans MS"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   735
      Left            =   4560
      TabIndex        =   3
      Top             =   2280
      Width           =   975
   End
   Begin VB.CommandButton Command1 
      Caption         =   "x"
      BeginProperty Font 
         Name            =   "Comic Sans MS"
         Size            =   24
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   735
      Left            =   4560
      TabIndex        =   2
      Top             =   840
      Width           =   855
   End
   Begin VB.TextBox Text2 
      BeginProperty Font 
         Name            =   "Comic Sans MS"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   375
      Left            =   2160
      TabIndex        =   1
      Top             =   1560
      Width           =   1455
   End
   Begin VB.TextBox Text1 
      BeginProperty Font 
         Name            =   "Comic Sans MS"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   375
      Left            =   2160
      TabIndex        =   0
      Top             =   840
      Width           =   1455
   End
   Begin VB.Label Label4 
      BackColor       =   &H80000009&
      BorderStyle     =   1  'Fixed Single
      BeginProperty Font 
         Name            =   "Comic Sans MS"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   375
      Left            =   2160
      TabIndex        =   7
      Top             =   2400
      Width           =   1575
   End
   Begin VB.Line Line1 
      BorderWidth     =   2
      X1              =   2040
      X2              =   3960
      Y1              =   2160
      Y2              =   2160
   End
   Begin VB.Label Label3 
      BackStyle       =   0  'Transparent
      Caption         =   "ingrese el segundo numero"
      BeginProperty Font 
         Name            =   "Comic Sans MS"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   240
      TabIndex        =   6
      Top             =   1560
      Width           =   1455
   End
   Begin VB.Label Label2 
      BackStyle       =   0  'Transparent
      Caption         =   "ingrese el primer numeron"
      BeginProperty Font 
         Name            =   "Comic Sans MS"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   240
      TabIndex        =   5
      Top             =   720
      Width           =   1575
   End
   Begin VB.Label Label1 
      BackStyle       =   0  'Transparent
      Caption         =   "multiplicando dos numeros"
      BeginProperty Font 
         Name            =   "Comic Sans MS"
         Size            =   14.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   1080
      TabIndex        =   4
      Top             =   120
      Width           =   3735
   End
End
Attribute VB_Name = "Form4"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim x As Byte
Dim y As Byte
Dim m As Byte

x = Text1.Text
y = Text2.Text

m = x * y

Label4.Caption = m

End Sub

Private Sub Command2_Click()
Text1.Text = ""
Text2.Text = ""
Label4.Caption = ""
Text1.SetFocus



End Sub

