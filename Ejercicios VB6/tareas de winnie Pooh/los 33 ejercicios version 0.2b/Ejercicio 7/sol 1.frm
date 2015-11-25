VERSION 5.00
Begin VB.Form Form2 
   Caption         =   "Form2"
   ClientHeight    =   2490
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   6345
   LinkTopic       =   "Form2"
   ScaleHeight     =   2490
   ScaleWidth      =   6345
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "determinar"
      Height          =   975
      Left            =   4680
      TabIndex        =   3
      Top             =   600
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   2040
      TabIndex        =   1
      Top             =   600
      Width           =   2055
   End
   Begin VB.Label Label2 
      Height          =   375
      Left            =   2040
      TabIndex        =   2
      Top             =   1320
      Width           =   1935
   End
   Begin VB.Label Label1 
      Caption         =   "ingrese un numero "
      Height          =   375
      Left            =   120
      TabIndex        =   0
      Top             =   600
      Width           =   1575
   End
End
Attribute VB_Name = "Form2"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Long

a = Val(Text1.Text)

If a >= 10000 And a <= 99999 Then
If a Mod 2 = o Then
    Label2.Caption = "es par"
Else
    Label2.Caption = "es impar"
    
End If
Else
MsgBox "el numero no cumple la condicion", 16, "error"
End If

    


End Sub

