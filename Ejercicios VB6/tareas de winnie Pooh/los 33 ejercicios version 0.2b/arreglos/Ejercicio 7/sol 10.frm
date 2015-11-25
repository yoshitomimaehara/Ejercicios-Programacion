VERSION 5.00
Begin VB.Form Form11 
   Caption         =   "Form11"
   ClientHeight    =   3090
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   4230
   LinkTopic       =   "Form11"
   ScaleHeight     =   3090
   ScaleWidth      =   4230
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "ejecutar"
      Height          =   855
      Left            =   3000
      TabIndex        =   2
      Top             =   360
      Width           =   975
   End
   Begin VB.TextBox Text2 
      Height          =   375
      Left            =   600
      TabIndex        =   1
      Top             =   840
      Width           =   1815
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   600
      TabIndex        =   0
      Top             =   240
      Width           =   1815
   End
   Begin VB.Label Label1 
      Height          =   975
      Left            =   720
      TabIndex        =   3
      Top             =   1680
      Width           =   1935
   End
End
Attribute VB_Name = "Form11"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Integer
Dim b As Integer
Dim s As Integer
Dim r As Integer
Dim m As Integer

a = Val(Text1.Text)
b = Val(Text2.Text)

If a = b Then
s = a + b
Label1.Caption = s
Else
If a Mod 2 Then
r = a - b
Label1.Caption = r
Else
m = a * b
Label1.Caption = m
End If
End If
End If



End Sub
