VERSION 5.00
Begin VB.Form Form3 
   Caption         =   "Solucion 8-3"
   ClientHeight    =   1455
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5745
   LinkTopic       =   "Form3"
   ScaleHeight     =   1455
   ScaleWidth      =   5745
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command2 
      Caption         =   "limpiar"
      Height          =   375
      Left            =   2640
      TabIndex        =   5
      Top             =   960
      Width           =   1455
   End
   Begin VB.CommandButton Command1 
      Caption         =   "hallar"
      Height          =   375
      Left            =   720
      TabIndex        =   4
      Top             =   960
      Width           =   1455
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   1920
      TabIndex        =   0
      Top             =   480
      Width           =   1335
   End
   Begin VB.Label Label3 
      BackColor       =   &H80000009&
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   3840
      TabIndex        =   3
      Top             =   480
      Width           =   1335
   End
   Begin VB.Label Label2 
      Caption         =   "Ingresar numero"
      Height          =   255
      Left            =   240
      TabIndex        =   2
      Top             =   480
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
      Left            =   3360
      TabIndex        =   1
      Top             =   480
      Width           =   375
   End
End
Attribute VB_Name = "Form3"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Integer
Dim v As Currency
a = Text1.Text
v = a * 0.03
Label3.Caption = v

End Sub

Private Sub Command2_Click()
Text1.Text = ""
Label3.Caption = ""
Text1.SetFocus
End Sub
