extends CharacterBody3D  

func _ready():
	pass

func _process(delta):
	# 检测攻击按键
	if Input.is_action_just_pressed("attack"):
		print("Attack!!")
