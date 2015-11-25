VERSION 5.00
Begin VB.Form Form24 
   Caption         =   "Form24"
   ClientHeight    =   5460
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   7290
   LinkTopic       =   "Form24"
   ScaleHeight     =   5460
   ScaleWidth      =   7290
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "calcular"
      Height          =   1095
      Left            =   5880
      TabIndex        =   6
      Top             =   600
      Width           =   1215
   End
   Begin VB.TextBox Text3 
      Height          =   495
      Left            =   3000
      TabIndex        =   5
      Top             =   2760
      Width           =   2655
   End
   Begin VB.TextBox Text2 
      Height          =   495
      Left            =   3000
      TabIndex        =   4
      Top             =   1800
      Width           =   2655
   End
   Begin VB.TextBox Text1 
      Height          =   495
      Left            =   3000
      TabIndex        =   3
      Top             =   600
      Width           =   2655
   End
   Begin VB.Label Label4 
      Height          =   1455
      Left            =   2760
      TabIndex        =   7
      Top             =   3720
      Width           =   3375
   End
   Begin VB.Label Label3 
      Caption         =   "ingresar un nombre"
      Height          =   615
      Left            =   480
      TabIndex        =   2
      Top             =   2760
      Width           =   1935
   End
   Begin VB.Label Label2 
      Caption         =   "ingresar otro numero"
      Height          =   495
      Left            =   480
      TabIndex        =   1
      Top             =   1800
      Width           =   1815
   End
   Begin VB.Label Label1 
      Caption         =   "ingresar un numero"
      Height          =   495
      Left            =   480
      TabIndex        =   0
      Top             =   720
      Width           =   1935
   End
End
Attribute VB_Name = "Form24"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Integer
Dim b As Integer
Dim nomb As String
Dim x As Integer

a = Val(Text1.Text)
b = Val(Text2.Text)
nomb = Text3.Text

If a Mod 2 = 0 And b Mod 2 = 0 Then
    For x = 1 To 15
    Label4.Caption = Label4.Caption + " " + nomb
    
    Next x
    
Else
    For x = 1 To 25
    Label4.Caption = Label4.Caption + " " + nomb
    Next x
End If

    
    

End Sub


