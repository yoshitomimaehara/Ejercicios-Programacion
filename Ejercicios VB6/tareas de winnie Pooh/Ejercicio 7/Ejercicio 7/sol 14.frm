VERSION 5.00
Begin VB.Form Form15 
   Caption         =   "Form15"
   ClientHeight    =   3090
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5280
   LinkTopic       =   "Form15"
   ScaleHeight     =   3090
   ScaleWidth      =   5280
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "ejecutar"
      Height          =   735
      Left            =   4200
      TabIndex        =   4
      Top             =   600
      Width           =   975
   End
   Begin VB.TextBox Text2 
      Height          =   495
      Left            =   1920
      TabIndex        =   1
      Top             =   1080
      Width           =   2055
   End
   Begin VB.TextBox Text1 
      Height          =   495
      Left            =   1920
      TabIndex        =   0
      Top             =   360
      Width           =   2055
   End
   Begin VB.Label Label3 
      Height          =   615
      Left            =   1920
      TabIndex        =   5
      Top             =   1920
      Width           =   2055
   End
   Begin VB.Label Label2 
      Caption         =   "ingresar el segundo numero"
      Height          =   495
      Left            =   240
      TabIndex        =   3
      Top             =   1200
      Width           =   1335
   End
   Begin VB.Label Label1 
      Caption         =   "ingresar el primer numero"
      Height          =   495
      Left            =   240
      TabIndex        =   2
      Top             =   360
      Width           =   1335
   End
End
Attribute VB_Name = "Form15"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Integer
Dim b As Integer
Dim s As Integer
Dim r As Integer
Dim m As Long

a = Val(Text1.Text)
b = Val(Text2.Text)

If a = b Then
s = a + b
Label3.Caption = s
Else
If a Mod 2 = 0 Then
r = a - b
Label3.Caption = r
Else
m = a * b
Label3.Caption = m
End If
End If

End Sub
