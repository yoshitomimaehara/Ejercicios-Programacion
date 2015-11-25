VERSION 5.00
Begin VB.Form Form3 
   Caption         =   "Form3"
   ClientHeight    =   1830
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   5355
   LinkTopic       =   "Form3"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   1830
   ScaleWidth      =   5355
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command2 
      Caption         =   "Limpiar"
      Height          =   495
      Left            =   3840
      TabIndex        =   4
      Top             =   1200
      Width           =   1335
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Resolver"
      Height          =   495
      Left            =   3840
      TabIndex        =   3
      Top             =   360
      Width           =   1335
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   1800
      TabIndex        =   0
      Top             =   480
      Width           =   1695
   End
   Begin VB.Label Label2 
      Height          =   495
      Left            =   1800
      TabIndex        =   2
      Top             =   1080
      Width           =   1695
   End
   Begin VB.Label Label1 
      Caption         =   "Ingrese el numero "
      Height          =   255
      Left            =   240
      TabIndex        =   1
      Top             =   480
      Width           =   1455
   End
End
Attribute VB_Name = "Form3"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Long
Dim d As Integer
Dim u As Integer

a = Val(Text1.Text)

If a >= 10 And a <= 99 Then
d = Int(a / 10)
u = a Mod 10
If d = u And a Mod 2 = 0 Then
Label2.Caption = "es capicua par de 2 digitos"
Else
Label2.Caption = "no es capicua par de 2 digitos"
End If
Else
MsgBox "no es de 2 digitos pe huevon", 16, "No seas huevon pe"
End If

End Sub

Private Sub Command2_Click()
Text1.Text = ""
Label2.Caption = ""
Text1.SetFocus
End Sub
