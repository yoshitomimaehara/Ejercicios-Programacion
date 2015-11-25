VERSION 5.00
Begin VB.Form Form2 
   BackColor       =   &H00FFC0C0&
   Caption         =   "restando.."
   ClientHeight    =   3450
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5790
   Icon            =   "Restando.frx":0000
   LinkTopic       =   "Form2"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   3450
   ScaleWidth      =   5790
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   2400
      TabIndex        =   3
      Top             =   960
      Width           =   1455
   End
   Begin VB.TextBox Text2 
      Height          =   375
      Left            =   2400
      TabIndex        =   2
      Top             =   1680
      Width           =   1455
   End
   Begin VB.CommandButton Command1 
      Caption         =   "-"
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
      Left            =   4800
      TabIndex        =   1
      Top             =   720
      Width           =   855
   End
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
      Left            =   4800
      TabIndex        =   0
      Top             =   2400
      Width           =   975
   End
   Begin VB.Label Label1 
      BackColor       =   &H00C0FFC0&
      BackStyle       =   0  'Transparent
      Caption         =   "restando dos numeros"
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
      Left            =   1560
      TabIndex        =   7
      Top             =   120
      Width           =   2895
   End
   Begin VB.Label Label2 
      BackColor       =   &H00C0FFC0&
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
      Left            =   360
      TabIndex        =   6
      Top             =   840
      Width           =   1575
   End
   Begin VB.Label Label3 
      BackColor       =   &H00C0FFC0&
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
      TabIndex        =   5
      Top             =   1680
      Width           =   1455
   End
   Begin VB.Line Line1 
      BorderWidth     =   2
      X1              =   2160
      X2              =   4080
      Y1              =   2280
      Y2              =   2280
   End
   Begin VB.Label Label4 
      BackColor       =   &H80000009&
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   2400
      TabIndex        =   4
      Top             =   2520
      Width           =   1455
   End
End
Attribute VB_Name = "Form2"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Command1_Click()
Dim x As Byte
Dim y As Byte
Dim r As Byte

x = Text1.Text
y = Text2.Text

r = x - y

Label4.Caption = r
End Sub

Private Sub Command2_Click()

Text1.Text = ""
Text2.Text = ""
Label4.Caption = ""
Text1.SetFocus
End Sub

