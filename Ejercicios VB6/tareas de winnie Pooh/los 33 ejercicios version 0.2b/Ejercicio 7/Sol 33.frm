VERSION 5.00
Begin VB.Form Form34 
   Caption         =   "Form34"
   ClientHeight    =   4920
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   6645
   LinkTopic       =   "Form34"
   ScaleHeight     =   4920
   ScaleWidth      =   6645
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "Ejecutar"
      Height          =   735
      Left            =   1920
      TabIndex        =   0
      Top             =   360
      Width           =   2895
   End
   Begin VB.Label Label1 
      Height          =   3135
      Left            =   720
      TabIndex        =   1
      Top             =   1440
      Width           =   5535
   End
End
Attribute VB_Name = "Form34"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()

Dim x As Integer
Dim y As Integer
Dim d As Integer
Dim u As Integer

For x = 1 To 100
d = Int(x / 10)
u = x Mod 10
If d = u Then
y = x + 10
Label1.Caption = Label1.Caption + "" + Str(y)
End If
Next x

End Sub

