VERSION 5.00
Begin VB.Form Form30 
   Caption         =   "Form30"
   ClientHeight    =   5310
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   6945
   LinkTopic       =   "Form30"
   ScaleHeight     =   5310
   ScaleWidth      =   6945
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "Ejecutar"
      Height          =   735
      Left            =   1920
      TabIndex        =   0
      Top             =   240
      Width           =   2535
   End
   Begin VB.Label Label1 
      Height          =   3135
      Left            =   600
      TabIndex        =   1
      Top             =   1560
      Width           =   5655
   End
End
Attribute VB_Name = "Form30"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim x As Currency
Dim c As Integer
Dim d As Integer
Dim u As Integer
Dim um As Integer

For x = 1000 To 9999
um = Int(x / 1000)
c = Int((x - (um * 1000)) / 100)
d = Int(((x - (um * 1000)) - (c * 100)) / 10)
u = x Mod 10

If um = u And c = d And x Mod 2 = 1 Then
Label1.Caption = Label1.Caption + "" + Str(x)

End If
Next x


End Sub

