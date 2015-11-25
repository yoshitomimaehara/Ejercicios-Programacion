VERSION 5.00
Begin VB.Form Form4 
   Caption         =   "Solucion 8 - 4"
   ClientHeight    =   1470
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5445
   LinkTopic       =   "Form4"
   ScaleHeight     =   1470
   ScaleWidth      =   5445
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   2040
      TabIndex        =   2
      Top             =   480
      Width           =   1335
   End
   Begin VB.CommandButton Command1 
      Caption         =   "hallar"
      Height          =   375
      Left            =   840
      TabIndex        =   1
      Top             =   960
      Width           =   1455
   End
   Begin VB.CommandButton Command2 
      Caption         =   "limpiar"
      Height          =   375
      Left            =   2760
      TabIndex        =   0
      Top             =   960
      Width           =   1455
   End
   Begin VB.Label Label1 
      Caption         =   " ="
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   12
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   375
      Left            =   3480
      TabIndex        =   5
      Top             =   480
      Width           =   375
   End
   Begin VB.Label Label2 
      Caption         =   "Ingresar sueldo"
      Height          =   255
      Left            =   360
      TabIndex        =   4
      Top             =   480
      Width           =   1455
   End
   Begin VB.Label Label3 
      BackColor       =   &H80000009&
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   3960
      TabIndex        =   3
      Top             =   480
      Width           =   1335
   End
End
Attribute VB_Name = "Form4"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim v As Integer
Dim r As Currency

v = Val(Text1.Text)

r = 0.95 * v

Label3.Caption = r



End Sub

Private Sub Command2_Click()
Text1.Text = ""
Label3.Caption = ""
Text1.SetFocus

End Sub

