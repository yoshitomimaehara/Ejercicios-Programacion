VERSION 5.00
Begin VB.Form Form20 
   Caption         =   "Form20"
   ClientHeight    =   2415
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   4440
   LinkTopic       =   "Form20"
   ScaleHeight     =   2415
   ScaleWidth      =   4440
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   480
      TabIndex        =   1
      Top             =   240
      Width           =   2415
   End
   Begin VB.CommandButton Command1 
      Caption         =   "ejecutar"
      Height          =   855
      Left            =   3240
      TabIndex        =   0
      Top             =   240
      Width           =   975
   End
   Begin VB.Label Label1 
      Height          =   855
      Left            =   240
      TabIndex        =   2
      Top             =   1200
      Width           =   2655
   End
End
Attribute VB_Name = "Form20"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Currency
Dim c As Currency
Dim d As Currency
Dim u As Currency
Dim um As Currency
Dim dm As Currency

a = Val(Text1.Text)

If a >= 10000 And a <= 99999 Then
dm = Int(a / 10000)
um = Int((a - (dm * 10000)) / 1000)
c = Int(((a - (dm * 10000)) - (um * 1000)) / 100)
d = Int((((a - (dm * 10000)) - (um * 1000)) - (c * 100)) / 10)
u = a Mod 10
If dm = u And um = d And a Mod 2 = 0 Then
Label2.Caption = "es capicua par de 5 digitos"
Else
Label2.Caption = " no es capicua par de 5 digitos"
End If
Else
MsgBox "no es de 5 cifras", 16, "huevon"
End If
End Sub

