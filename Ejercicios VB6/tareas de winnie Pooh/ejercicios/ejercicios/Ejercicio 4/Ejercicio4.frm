VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Pago de Honorarios - Empleados."
   ClientHeight    =   4650
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   5820
   ControlBox      =   0   'False
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   4650
   ScaleWidth      =   5820
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command3 
      Caption         =   "&Salir"
      Height          =   495
      Left            =   120
      TabIndex        =   8
      Top             =   3840
      Width           =   1575
   End
   Begin VB.CommandButton Command2 
      Caption         =   "&Otro"
      Height          =   495
      Left            =   120
      TabIndex        =   7
      Top             =   3000
      Width           =   1575
   End
   Begin VB.CommandButton Command1 
      Caption         =   "&Calcular"
      Height          =   495
      Left            =   120
      TabIndex        =   6
      Top             =   2160
      Width           =   1575
   End
   Begin VB.TextBox Text3 
      Height          =   285
      Left            =   2160
      TabIndex        =   5
      Top             =   1200
      Width           =   1095
   End
   Begin VB.TextBox Text2 
      Height          =   285
      Left            =   2160
      TabIndex        =   4
      Top             =   720
      Width           =   1095
   End
   Begin VB.TextBox Text1 
      Height          =   285
      Left            =   2160
      TabIndex        =   3
      Top             =   240
      Width           =   2895
   End
   Begin VB.Label Label11 
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   4320
      TabIndex        =   16
      Top             =   3840
      Width           =   1215
   End
   Begin VB.Label Label10 
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   4320
      TabIndex        =   15
      Top             =   3240
      Width           =   1215
   End
   Begin VB.Label Label9 
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   4320
      TabIndex        =   14
      Top             =   2640
      Width           =   1215
   End
   Begin VB.Label Label8 
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   4320
      TabIndex        =   13
      Top             =   2040
      Width           =   1215
   End
   Begin VB.Label Label7 
      Caption         =   "Total a Pagar ==>"
      Height          =   255
      Left            =   2280
      TabIndex        =   12
      Top             =   3960
      Width           =   1455
   End
   Begin VB.Label Label6 
      Caption         =   "Pago por Hs Extra"
      Height          =   255
      Left            =   2280
      TabIndex        =   11
      Top             =   3360
      Width           =   1575
   End
   Begin VB.Label Label5 
      Caption         =   "Pago por Hs Normales"
      Height          =   255
      Left            =   2280
      TabIndex        =   10
      Top             =   2760
      Width           =   1695
   End
   Begin VB.Label Label4 
      Caption         =   "Pago por hora"
      Height          =   255
      Left            =   2280
      TabIndex        =   9
      Top             =   2160
      Width           =   1095
   End
   Begin VB.Line Line1 
      BorderColor     =   &H00FF0000&
      BorderWidth     =   3
      X1              =   0
      X2              =   5880
      Y1              =   1800
      Y2              =   1800
   End
   Begin VB.Label Label3 
      Caption         =   "Horas Extras"
      Height          =   255
      Left            =   240
      TabIndex        =   2
      Top             =   1200
      Width           =   1575
   End
   Begin VB.Label Label2 
      Caption         =   "Horas Trabajadas"
      Height          =   255
      Left            =   240
      TabIndex        =   1
      Top             =   720
      Width           =   1575
   End
   Begin VB.Label Label1 
      Caption         =   "Nombre de empleado"
      Height          =   255
      Left            =   240
      TabIndex        =   0
      Top             =   240
      Width           =   1575
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim n As String
Dim ht As Byte
Dim he As Byte
Dim ph As String
Dim tht As Currency
Dim the As Currency
Dim tp As Currency

n = Text1.Text
ht = Val(Text2.Text)
he = Val(Text3.Text)

If ht < 48 Then
ph = "S/.7.00"
Label8.Caption = ph
tht = ht * 7
Label9.Caption = tht
the = he * 9.5
Label10.Caption = the
tp = tht + the
Label11.Caption = tp
Else
ph = "S/.8.00"
Label8.Caption = ph
tht = ht * 8
Label9.Caption = tht
the = he * 9.5
Label10.Caption = the
tp = tht + the
Label11.Caption = tp
End If


End Sub

Private Sub Command2_Click()
Text1.Text = ""
Text2.Text = ""
Text3.Text = ""
Label8.Caption = ""
Label9.Caption = ""
Label10.Caption = ""
Label11.Caption = ""
Text1.SetFocus
End Sub

Private Sub Command3_Click()
Unload Me
End Sub

Private Sub Form_Load()

End Sub
