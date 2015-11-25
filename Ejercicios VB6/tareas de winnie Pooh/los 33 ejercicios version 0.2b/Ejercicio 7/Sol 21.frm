VERSION 5.00
Begin VB.Form Form22 
   Caption         =   "Form22"
   ClientHeight    =   2730
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   4680
   LinkTopic       =   "Form22"
   ScaleHeight     =   2730
   ScaleWidth      =   4680
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "Ejecutar"
      Height          =   735
      Left            =   3360
      TabIndex        =   2
      Top             =   480
      Width           =   975
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   360
      TabIndex        =   0
      Top             =   480
      Width           =   2535
   End
   Begin VB.Label Label1 
      Height          =   975
      Left            =   360
      TabIndex        =   1
      Top             =   1440
      Width           =   2655
   End
End
Attribute VB_Name = "Form22"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Currency

a = Val(Text1.Text)

If a >= 1 And a <= 9 Then
Label1.Caption = "es de un digito"
Else
If a >= 10 And a <= 99 Then
Label1.Caption = "es de un 2 digitos"
Else
If a >= 100 And a <= 999 Then
Label1.Caption = "es de un 3 digitos"
Else
If a >= 1000 And a <= 9999 Then
Label1.Caption = "es de un 4 digitos"
Else
If a >= 10000 And a <= 99999 Then
Label1.Caption = "es de un  5 digitos"
Else
If a >= 100000 And a <= 999999 Then
Label1.Caption = "es de un 6 digitos"
End If
End If
End If
End If
End If
End If


End Sub
