VERSION 5.00
Begin VB.Form Form18 
   Caption         =   "Form18"
   ClientHeight    =   2640
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5670
   LinkTopic       =   "Form18"
   ScaleHeight     =   2640
   ScaleWidth      =   5670
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "ejecutar"
      Height          =   735
      Left            =   4200
      TabIndex        =   1
      Top             =   600
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   600
      TabIndex        =   0
      Top             =   360
      Width           =   2295
   End
   Begin VB.Label Label1 
      Height          =   975
      Left            =   600
      TabIndex        =   2
      Top             =   1080
      Width           =   3015
   End
End
Attribute VB_Name = "Form18"
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
Dim s As Integer

a = Val(Text1.Text)

If a >= 1000 And a <= 9999 Then
um = Int(a / 1000)
c = Int((a - (um * 1000)) / 100)
d = Int(((a - (um * 1000)) - (c * 100)) / 10)
u = a Mod 10

s = um + c + d + u
Label1.Caption = s
Else
MsgBox "no es de 4 cifras", 16, "huevon"
End If
End Sub


