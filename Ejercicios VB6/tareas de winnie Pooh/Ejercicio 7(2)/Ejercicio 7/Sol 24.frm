VERSION 5.00
Begin VB.Form Form25 
   Caption         =   "Form25"
   ClientHeight    =   6225
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   7380
   LinkTopic       =   "Form25"
   ScaleHeight     =   6225
   ScaleWidth      =   7380
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "calcular"
      Height          =   975
      Left            =   6000
      TabIndex        =   7
      Top             =   600
      Width           =   1335
   End
   Begin VB.TextBox Text3 
      Height          =   495
      Left            =   2880
      TabIndex        =   5
      Top             =   2520
      Width           =   2655
   End
   Begin VB.TextBox Text2 
      Height          =   495
      Left            =   2880
      TabIndex        =   4
      Top             =   1440
      Width           =   2655
   End
   Begin VB.TextBox Text1 
      Height          =   615
      Left            =   2880
      TabIndex        =   3
      Top             =   360
      Width           =   2775
   End
   Begin VB.Label Label4 
      Height          =   1935
      Left            =   2040
      TabIndex        =   6
      Top             =   3720
      Width           =   3855
   End
   Begin VB.Label Label3 
      Caption         =   "ingrese un nombre"
      Height          =   615
      Left            =   360
      TabIndex        =   2
      Top             =   2520
      Width           =   2175
   End
   Begin VB.Label Label2 
      Caption         =   "ingrese otro numero"
      Height          =   495
      Left            =   360
      TabIndex        =   1
      Top             =   1320
      Width           =   1935
   End
   Begin VB.Label Label1 
      Caption         =   "ingresar un numero"
      Height          =   495
      Left            =   480
      TabIndex        =   0
      Top             =   480
      Width           =   1815
   End
End
Attribute VB_Name = "Form25"
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

Label4.Caption = ""
If a = b Then
    For x = 1 To 5
    Label4.Caption = Label4.Caption + " " + nomb
    Next x
Else
If a > b Then
For x = 1 To 10
    Label4.Caption = Label4.Caption + " " + nomb
    Next x
Else
For x = 1 To 15
    Label4.Caption = Label4.Caption + " " + nomb
    Next x
    End If
    End If
    

    
End Sub
