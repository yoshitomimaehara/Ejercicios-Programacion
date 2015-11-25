VERSION 5.00
Begin VB.Form Form11 
   Caption         =   "Form11"
   ClientHeight    =   2055
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5010
   LinkTopic       =   "Form11"
   ScaleHeight     =   2055
   ScaleWidth      =   5010
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   1800
      TabIndex        =   3
      Top             =   120
      Width           =   1935
   End
   Begin VB.TextBox Text2 
      Height          =   375
      Left            =   1800
      TabIndex        =   2
      Top             =   720
      Width           =   1935
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Resolver"
      Height          =   495
      Left            =   3960
      TabIndex        =   1
      Top             =   120
      Width           =   975
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Limpiar"
      Height          =   495
      Left            =   3960
      TabIndex        =   0
      Top             =   840
      Width           =   975
   End
   Begin VB.Label Label1 
      Caption         =   "Ingresa el primer numero"
      Height          =   375
      Left            =   120
      TabIndex        =   6
      Top             =   120
      Width           =   1455
   End
   Begin VB.Label Label2 
      Caption         =   "Ingresa el segundo numero"
      Height          =   375
      Left            =   120
      TabIndex        =   5
      Top             =   840
      Width           =   1455
   End
   Begin VB.Label Label3 
      Height          =   495
      Left            =   1800
      TabIndex        =   4
      Top             =   1440
      Width           =   1815
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
Dim r As Currency
Dim m As Integer

a = Val(Text1.Text)
b = Val(Text2.Text)

If a Mod 2 = 0 And b Mod 2 = 0 Then
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

