VERSION 5.00
Begin VB.Form Form10 
   ClientHeight    =   1920
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5760
   LinkTopic       =   "Form10"
   ScaleHeight     =   1920
   ScaleWidth      =   5760
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "Ejecutar"
      Height          =   735
      Left            =   4440
      TabIndex        =   3
      Top             =   360
      Width           =   975
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   1800
      TabIndex        =   0
      Top             =   360
      Width           =   2055
   End
   Begin VB.Label Label2 
      Height          =   495
      Left            =   1680
      TabIndex        =   2
      Top             =   1080
      Width           =   2295
   End
   Begin VB.Label Label1 
      Caption         =   "ingrese el numero"
      Height          =   375
      Left            =   240
      TabIndex        =   1
      Top             =   360
      Width           =   1335
   End
End
Attribute VB_Name = "Form10"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Integer

a = Val(Text1.Text)
If a > 100 And a Mod 2 = 1 Then
Label2.Caption = "es impar mayor 100"

Else

Label2.Caption = "es impar mayor 100"
End If
End Sub
