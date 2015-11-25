VERSION 5.00
Begin VB.Form Form4 
   Caption         =   "Form4"
   ClientHeight    =   1830
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   5325
   LinkTopic       =   "Form4"
   ScaleHeight     =   1830
   ScaleWidth      =   5325
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   1800
      TabIndex        =   2
      Top             =   360
      Width           =   1695
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Resolver"
      Height          =   495
      Left            =   3840
      TabIndex        =   1
      Top             =   240
      Width           =   1335
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Limpiar"
      Height          =   495
      Left            =   3840
      TabIndex        =   0
      Top             =   1080
      Width           =   1335
   End
   Begin VB.Label Label1 
      Caption         =   "Ingrese el numero "
      Height          =   255
      Left            =   240
      TabIndex        =   4
      Top             =   360
      Width           =   1455
   End
   Begin VB.Label Label2 
      Height          =   495
      Left            =   1800
      TabIndex        =   3
      Top             =   960
      Width           =   1695
   End
End
Attribute VB_Name = "Form4"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Integer
Dim x As Integer
a = Val(Text1.Text)
If a >= 1 And a <= 9 Then
x = a * 101
Label2.Caption = x
Else
MsgBox "no es un numero de un digito pe huevon", 16, "no ps huevon"
End If
End Sub

Private Sub Command2_Click()
Text1.Text = ""
Label2.Caption = ""
Text1.SetFocus
End Sub
