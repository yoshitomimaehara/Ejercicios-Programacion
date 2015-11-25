VERSION 5.00
Begin VB.Form Form21 
   Caption         =   "Form21"
   ClientHeight    =   1935
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   5040
   LinkTopic       =   "Form21"
   ScaleHeight     =   1935
   ScaleWidth      =   5040
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   1680
      TabIndex        =   1
      Top             =   240
      Width           =   1575
   End
   Begin VB.CommandButton Command1 
      Caption         =   "verificar"
      Height          =   495
      Left            =   3840
      TabIndex        =   0
      Top             =   360
      Width           =   975
   End
   Begin VB.Label Label1 
      Caption         =   "ingrese el numero "
      Height          =   255
      Left            =   120
      TabIndex        =   3
      Top             =   240
      Width           =   1335
   End
   Begin VB.Label Label2 
      Height          =   495
      Left            =   1680
      TabIndex        =   2
      Top             =   960
      Width           =   1695
   End
End
Attribute VB_Name = "Form21"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Command1_Click()
Dim a As Long
Dim dm As Currency
Dim um As Currency
Dim c As Currency
Dim d As Currency
Dim u As Currency

a = Val(Text1.Text)

If a >= 10000 And a <= 99999 Then
dm = Int(a / 10000)
um = Int((a - (dm * 10000)) / 1000)
c = Int(((a - (dm * 10000)) - (um * 1000)) / 100)
d = Int((((a - (dm * 10000)) - (um * 1000)) - (c * 100)) / 10)
u = a Mod 10
    If dm = u And a Mod 2 = 1 Then
    Label2.Caption = "es numero capicua de 5 digitos impar"
    Else
    Label2.Caption = "no es numero capicua de 5 digitos impar"
    End If
Else
MsgBox "error", 12, "no es de 5 digitos"
End If

End Sub

