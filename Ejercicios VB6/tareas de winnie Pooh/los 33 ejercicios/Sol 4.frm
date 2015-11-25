VERSION 5.00
Begin VB.Form Form5 
   Caption         =   "Form5"
   ClientHeight    =   1650
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   5535
   LinkTopic       =   "Form5"
   ScaleHeight     =   1650
   ScaleWidth      =   5535
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command2 
      Caption         =   "Limpiar"
      Height          =   495
      Left            =   3840
      TabIndex        =   2
      Top             =   960
      Width           =   1335
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Resolver"
      Height          =   495
      Left            =   3840
      TabIndex        =   1
      Top             =   120
      Width           =   1335
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   1800
      TabIndex        =   0
      Top             =   240
      Width           =   1695
   End
   Begin VB.Label Label2 
      Height          =   495
      Left            =   1800
      TabIndex        =   4
      Top             =   840
      Width           =   1695
   End
   Begin VB.Label Label1 
      Caption         =   "Ingrese el numero "
      Height          =   255
      Left            =   240
      TabIndex        =   3
      Top             =   240
      Width           =   1455
   End
End
Attribute VB_Name = "Form5"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Integer
Dim c As Integer
Dim d As Integer
Dim u As Integer

a = Val(Text1.Text)
If a >= 1000 And a <= 9999 Then
um = Int(a / 1000)
c = Int((a - (um * 1000)) / 100)
d = Int((a - (um * 1000) - (c * 100)) / 10)
u = a Mod 10
If um = u Then
Label2.Caption = " es capicua de 4 digitos"
Else
Label2.Caption = " no es capicua de 4 digitos"
End If
Else
MsgBox "no es un numero de 4 digitos pe huevon", 16, "no ps huevon"
End If
End Sub
Private Sub Command2_Click()
Text1.Text = ""
Label2.Caption = ""
Text1.SetFocus
End Sub
