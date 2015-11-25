VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "INGRESO DE DATOS"
   ClientHeight    =   6660
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   5205
   LinkTopic       =   "Form1"
   ScaleHeight     =   6660
   ScaleWidth      =   5205
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command2 
      Caption         =   "&Finalizar"
      Height          =   615
      Left            =   2760
      TabIndex        =   12
      Top             =   5880
      Width           =   1815
   End
   Begin VB.CommandButton Command1 
      Caption         =   "&Nuevo Alumno"
      Height          =   615
      Left            =   480
      TabIndex        =   11
      Top             =   5880
      Width           =   1815
   End
   Begin VB.TextBox Text5 
      Height          =   1815
      Left            =   480
      MultiLine       =   -1  'True
      ScrollBars      =   2  'Vertical
      TabIndex        =   10
      Top             =   3840
      Width           =   4095
   End
   Begin VB.TextBox Text4 
      Height          =   375
      Left            =   1920
      TabIndex        =   9
      Top             =   2760
      Width           =   1815
   End
   Begin VB.TextBox Text3 
      Height          =   375
      Left            =   1320
      TabIndex        =   8
      Top             =   2280
      Width           =   1095
   End
   Begin VB.TextBox Text2 
      Height          =   375
      Left            =   1320
      TabIndex        =   7
      Top             =   1680
      Width           =   3375
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   1200
      TabIndex        =   6
      Top             =   960
      Width           =   2655
   End
   Begin VB.Label Label6 
      Caption         =   "Observaciones"
      Height          =   255
      Left            =   1800
      TabIndex        =   5
      Top             =   3360
      Width           =   1095
   End
   Begin VB.Label Label5 
      Caption         =   "Centro de estudios"
      Height          =   255
      Left            =   360
      TabIndex        =   4
      Top             =   2880
      Width           =   1455
   End
   Begin VB.Label Label4 
      Caption         =   "Telefono"
      Height          =   255
      Left            =   360
      TabIndex        =   3
      Top             =   2280
      Width           =   735
   End
   Begin VB.Label Label3 
      Caption         =   "Direccion"
      Height          =   255
      Left            =   360
      TabIndex        =   2
      Top             =   1680
      Width           =   735
   End
   Begin VB.Label Label2 
      Caption         =   "Nombre"
      Height          =   255
      Left            =   360
      TabIndex        =   1
      Top             =   1080
      Width           =   615
   End
   Begin VB.Label Label1 
      BorderStyle     =   1  'Fixed Single
      Caption         =   "      Datos Personales"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   18
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   480
      TabIndex        =   0
      Top             =   240
      Width           =   4095
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Text1.Text = ""
Text2.Text = ""
Text3.Text = ""
Text4.Text = ""
Text5.Text = ""
Text1.SetFocus

End Sub

Private Sub Command2_Click()
Unload Me
End Sub
