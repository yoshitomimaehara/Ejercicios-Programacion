VERSION 5.00
Begin VB.Form Form18 
   Caption         =   "Form18"
   ClientHeight    =   1965
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5085
   LinkTopic       =   "Form18"
   ScaleHeight     =   1965
   ScaleWidth      =   5085
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "Ejecutar"
      Height          =   855
      Left            =   3960
      TabIndex        =   3
      Top             =   360
      Width           =   975
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   1560
      TabIndex        =   0
      Top             =   480
      Width           =   2175
   End
   Begin VB.Label Label2 
      Height          =   495
      Left            =   1440
      TabIndex        =   2
      Top             =   1200
      Width           =   2055
   End
   Begin VB.Label Label1 
      Caption         =   "ingresa el numero"
      Height          =   495
      Left            =   120
      TabIndex        =   1
      Top             =   480
      Width           =   1335
   End
End
Attribute VB_Name = "Form18"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Integer
Dim um As Integer
Dim d As Integer
Dim c As Integer
Dim u As Integer
Dim s As Integer

a = Val(Text1.Text)

If a >= 1000 And a <= 9999 Then
um = Int(a / 1000)
c = Int((a - (um * 1000)) / 100)
d = Int(((a - (um * 1000)) - (c * 100)) / 10)
u = a Mod 10

s = um + c + d + u
Label2.Caption = s

End If

End Sub
