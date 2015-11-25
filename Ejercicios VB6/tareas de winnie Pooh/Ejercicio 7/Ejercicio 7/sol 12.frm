VERSION 5.00
Begin VB.Form Form13 
   Caption         =   "Form13"
   ClientHeight    =   1800
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5190
   LinkTopic       =   "Form13"
   ScaleHeight     =   1800
   ScaleWidth      =   5190
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   1800
      TabIndex        =   1
      Top             =   240
      Width           =   1575
   End
   Begin VB.CommandButton Command1 
      Caption         =   "verificar"
      Height          =   495
      Left            =   3960
      TabIndex        =   0
      Top             =   360
      Width           =   975
   End
   Begin VB.Label Label1 
      Caption         =   "ingrese el numero "
      Height          =   255
      Left            =   240
      TabIndex        =   3
      Top             =   240
      Width           =   1335
   End
   Begin VB.Label Label2 
      Height          =   495
      Left            =   1800
      TabIndex        =   2
      Top             =   960
      Width           =   1695
   End
End
Attribute VB_Name = "Form13"
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
If um = u And a Mod 2 = 0 Then
Label2.Caption = " es capicua de 4 digitos par"
Else
Label2.Caption = " no es capicua de 4 digitos impar"
End If
Else
MsgBox "no es de 4 cifras", 16, "imbeshil"
End If
End Sub


