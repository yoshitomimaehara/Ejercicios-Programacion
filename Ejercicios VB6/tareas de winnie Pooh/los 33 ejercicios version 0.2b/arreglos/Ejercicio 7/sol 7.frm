VERSION 5.00
Begin VB.Form Form8 
   Caption         =   "Form8"
   ClientHeight    =   2025
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   6180
   LinkTopic       =   "Form8"
   ScaleHeight     =   2025
   ScaleWidth      =   6180
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   1800
      TabIndex        =   1
      Top             =   360
      Width           =   1575
   End
   Begin VB.CommandButton Command1 
      Caption         =   "verificar"
      Height          =   495
      Left            =   4440
      TabIndex        =   0
      Top             =   480
      Width           =   975
   End
   Begin VB.Label Label1 
      Caption         =   "ingrese el numero "
      Height          =   255
      Left            =   240
      TabIndex        =   3
      Top             =   360
      Width           =   1335
   End
   Begin VB.Label Label2 
      Height          =   495
      Left            =   1800
      TabIndex        =   2
      Top             =   1080
      Width           =   1695
   End
End
Attribute VB_Name = "Form8"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Integer
Dim c As Integer
Dim d As Integer
Dim u As Integer
Dim um As Integer

a = Val(Text1.Text)

If a >= 1000 And a <= 9999 Then
um = Int(a / 1000)
c = Int((a - (c * 1000)) / 100)
d = Int(((a - (um * 1000)) - (c * 100)) / 10)
u = a Mod 10
If um = u And a Mod 2 = 1 Then
Label2.Caption = "es capicua impar de 4 digitos"
Else
Label2.Caption = " no es capicua impar de 4 digitos"
End If
Else
MsgBox "no es de 4 cifras", 16, "huevon"
End If
End Sub


