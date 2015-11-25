VERSION 5.00
Begin VB.Form Form32 
   Caption         =   "Form32"
   ClientHeight    =   2970
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   4440
   LinkTopic       =   "Form32"
   ScaleHeight     =   2970
   ScaleWidth      =   4440
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "Ejecutar"
      Height          =   735
      Left            =   3000
      TabIndex        =   1
      Top             =   360
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   480
      TabIndex        =   0
      Top             =   360
      Width           =   2175
   End
   Begin VB.Label Label1 
      Height          =   1335
      Left            =   360
      TabIndex        =   2
      Top             =   1320
      Width           =   2895
   End
End
Attribute VB_Name = "Form32"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim x As Integer
Dim y As Integer

x = Val(Text1.Text)
If x Mod 2 = 0 Then
y = x - 45
Label1.Caption = y
Else
MsgBox "no es par", 16, "error"
End If


End Sub
