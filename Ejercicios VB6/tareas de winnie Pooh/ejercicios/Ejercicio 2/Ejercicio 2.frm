VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3435
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   7530
   ControlBox      =   0   'False
   BeginProperty Font 
      Name            =   "MS Sans Serif"
      Size            =   13.5
      Charset         =   0
      Weight          =   700
      Underline       =   0   'False
      Italic          =   0   'False
      Strikethrough   =   0   'False
   EndProperty
   ForeColor       =   &H00000000&
   LinkTopic       =   "Form1"
   ScaleHeight     =   3435
   ScaleWidth      =   7530
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command3 
      Caption         =   "mostrar tu equipo fondo libre color de letras libre"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   855
      Left            =   5640
      MaskColor       =   &H00FFFF00&
      TabIndex        =   3
      Top             =   2160
      Width           =   1575
   End
   Begin VB.CommandButton Command2 
      BackColor       =   &H0080FFFF&
      Caption         =   "mostrar tu direccion fondo negro letras amarillas"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   855
      Left            =   3000
      TabIndex        =   2
      Top             =   2160
      Width           =   1815
   End
   Begin VB.CommandButton Command1 
      Caption         =   "mostrar tu nombre-fondo blanco letras azules"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   855
      Left            =   480
      TabIndex        =   1
      Top             =   2160
      Width           =   1575
   End
   Begin VB.Label Label1 
      Alignment       =   2  'Center
      BackColor       =   &H00FFFFFF&
      BorderStyle     =   1  'Fixed Single
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   18
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1215
      Left            =   480
      TabIndex        =   0
      Top             =   360
      Width           =   6495
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Label1.Caption = "walter yoshi"
Label1.ForeColor = &HFF0000
Label1.BackColor = &HFFFFFF
End Sub

Private Sub Command2_Click()
Label1.Caption = "san martin de porres huandoy 234"
Label1.ForeColor = &HFFFF&
Label1.BackColor = &H0&

End Sub

Private Sub Command3_Click()
Label1.Caption = "sporting Cristal"
Label1.ForeColor = &HFFFFFF
Label1.BackColor = &HFFFF00
End Sub

Private Sub Form_DblClick()
Unload Me
End Sub
