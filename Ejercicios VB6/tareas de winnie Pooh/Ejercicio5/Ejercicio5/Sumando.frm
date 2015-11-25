VERSION 5.00
Begin VB.Form Form1 
   BackColor       =   &H00C0FFC0&
   Caption         =   "sumando ..."
   ClientHeight    =   3585
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5130
   Icon            =   "Sumando.frx":0000
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   3585
   ScaleWidth      =   5130
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
      Left            =   3960
      TabIndex        =   6
      Top             =   2520
      Width           =   975
   End
   Begin VB.CommandButton Command1 
      Caption         =   "+"
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
      Left            =   3960
      TabIndex        =   5
      Top             =   960
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
      Left            =   1920
      TabIndex        =   4
      Top             =   1920
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
      Left            =   1920
      TabIndex        =   3
      Top             =   1200
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
      Left            =   1920
      TabIndex        =   7
      Top             =   2760
      Width           =   1575
   End
   Begin VB.Line Line1 
      BorderWidth     =   2
      X1              =   1800
      X2              =   3720
      Y1              =   2520
      Y2              =   2520
   End
   Begin VB.Label Label3 
      BackStyle       =   0  'Transparent
      Caption         =   "ingrese el segundo numero"
      Height          =   495
      Left            =   240
      TabIndex        =   2
      Top             =   1920
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
      TabIndex        =   1
      Top             =   1080
      Width           =   1575
   End
   Begin VB.Label Label1 
      BackStyle       =   0  'Transparent
      Caption         =   "sumando dos numeros"
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
      Left            =   1200
      TabIndex        =   0
      Top             =   240
      Width           =   2895
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim x As Byte
Dim y As Byte
Dim s As Byte

x = Text1.Text
y = Text2.Text

s = x + y

Label4.Caption = s

End Sub

Private Sub Command2_Click()
Text1.Text = ""
Text2.Text = ""
Label4.Caption = ""
Text1.SetFocus



End Sub

