VERSION 5.00
Begin VB.Form Form3 
   Caption         =   "Form3"
   ClientHeight    =   2670
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   6945
   LinkTopic       =   "Form3"
   ScaleHeight     =   2670
   ScaleWidth      =   6945
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "determinar"
      Height          =   855
      Left            =   5400
      TabIndex        =   3
      Top             =   720
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   2400
      TabIndex        =   1
      Top             =   720
      Width           =   2175
   End
   Begin VB.Label Label2 
      Height          =   375
      Left            =   2400
      TabIndex        =   2
      Top             =   1440
      Width           =   2055
   End
   Begin VB.Label Label1 
      Caption         =   "ingresar un numero"
      Height          =   375
      Left            =   360
      TabIndex        =   0
      Top             =   720
      Width           =   1575
   End
End
Attribute VB_Name = "Form3"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Byte
Dim d As Integer
Dim u As Integer

a = Val(Text1.Text)
If a >= 10 And a <= 99 Then
    d = Int(a / 10)
    u = a Mod 10
If d = u And a Mod 2 = 0 Then
    Label2.Caption = "es capicua par de dos digitos"
Else
    Label2.Caption = "no es capicua par de dos digitos"
End If
Else
MsgBox "ha ocurrido un error", 16, "error"

End If



End Sub
