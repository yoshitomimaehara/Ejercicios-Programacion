VERSION 5.00
Begin VB.Form Form14 
   Caption         =   "Form14"
   ClientHeight    =   3000
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   7185
   LinkTopic       =   "Form14"
   ScaleHeight     =   3000
   ScaleWidth      =   7185
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "Ejecutar"
      Height          =   975
      Left            =   5760
      TabIndex        =   2
      Top             =   720
      Width           =   1335
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   2520
      TabIndex        =   1
      Top             =   960
      Width           =   2535
   End
   Begin VB.Label Label2 
      Height          =   615
      Left            =   2280
      TabIndex        =   3
      Top             =   2040
      Width           =   2895
   End
   Begin VB.Line Line1 
      X1              =   1920
      X2              =   5280
      Y1              =   1680
      Y2              =   1680
   End
   Begin VB.Label Label1 
      Caption         =   "ingesa un numero"
      Height          =   255
      Left            =   480
      TabIndex        =   0
      Top             =   960
      Width           =   1575
   End
End
Attribute VB_Name = "Form14"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim x As Long

x = Val(Text1.Text)

If x >= 1000000000 And x <= 9999999999# And x Mod 2 = 0 Then
Label2.Caption = "es un numero de 10 digitos par"
Else
Label2.Caption = "no es un numero de 10 digitos par"
 
End If

End Sub

