VERSION 5.00
Begin VB.Form Form33 
   Caption         =   "Form33"
   ClientHeight    =   4740
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   6855
   LinkTopic       =   "Form33"
   ScaleHeight     =   4740
   ScaleWidth      =   6855
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "Ejecutar"
      Height          =   735
      Left            =   2040
      TabIndex        =   0
      Top             =   360
      Width           =   2895
   End
   Begin VB.Label Label1 
      Height          =   2895
      Left            =   1200
      TabIndex        =   1
      Top             =   1440
      Width           =   4575
   End
End
Attribute VB_Name = "Form33"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim x As Integer
Dim y As Integer

For x = 1 To 100
y = -x + 13
Label1.Caption = Label1.Caption + "" + Str(y)
Next x

End Sub
