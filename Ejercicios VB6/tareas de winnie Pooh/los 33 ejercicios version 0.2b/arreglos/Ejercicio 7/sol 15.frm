VERSION 5.00
Begin VB.Form Form16 
   Caption         =   "Form16"
   ClientHeight    =   3480
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   7020
   LinkTopic       =   "Form16"
   ScaleHeight     =   3480
   ScaleWidth      =   7020
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "ejecutar"
      Height          =   1215
      Left            =   5400
      TabIndex        =   2
      Top             =   600
      Width           =   1455
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   2280
      TabIndex        =   1
      Top             =   960
      Width           =   2175
   End
   Begin VB.Label Label2 
      Height          =   1215
      Left            =   1920
      TabIndex        =   3
      Top             =   1920
      Width           =   3015
   End
   Begin VB.Line Line1 
      X1              =   1560
      X2              =   5040
      Y1              =   1680
      Y2              =   1680
   End
   Begin VB.Label Label1 
      Caption         =   "ingresar un numero"
      Height          =   375
      Left            =   360
      TabIndex        =   0
      Top             =   960
      Width           =   1575
   End
End
Attribute VB_Name = "Form16"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Integer
Dim um As Currency
Dim c As Currency
Dim d As Currency
Dim u As Currency


a = Val(Text1.Text)

If a > 6666 And a <= 9999 Then
um = Int(a / 1000)
c = Int(a - (um * 1000) / 100)
d = Int(((a - (um * 1000)) - (c * 100)) / 10)
u = a Mod 10
If um = u And a Mod 2 = 0 Then
Label2.Caption = "es capicua de 4 digitos par mayor a 6666"
Else
Label2.Caption = "no es capicua de 4 digitos par mayor a 6666"
End If
Else
MsgBox "error", 16, "inbeshil"
End If


End Sub
