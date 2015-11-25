VERSION 5.00
Begin VB.Form Form4 
   Caption         =   "Form4"
   ClientHeight    =   2280
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   6570
   LinkTopic       =   "Form4"
   ScaleHeight     =   2280
   ScaleWidth      =   6570
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "determinar"
      Height          =   975
      Left            =   4800
      TabIndex        =   3
      Top             =   600
      Width           =   1335
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   1920
      TabIndex        =   1
      Top             =   720
      Width           =   1695
   End
   Begin VB.Label Label2 
      Height          =   375
      Left            =   1920
      TabIndex        =   2
      Top             =   1320
      Width           =   1575
   End
   Begin VB.Label Label1 
      Caption         =   "ingrese un numero"
      Height          =   375
      Left            =   240
      TabIndex        =   0
      Top             =   720
      Width           =   1455
   End
End
Attribute VB_Name = "Form4"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Byte
Dim c As Integer

a = Val(Text1.Text)

If a >= 1 And a <= 9 Then
c = a * 101
Label2.Caption = c
End If





End Sub
