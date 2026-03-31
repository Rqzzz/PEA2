using UnityEngine;
using UnityEngine.InputSystem;  

public class PlayerAttack : MonoBehaviour
{
    private PlayerControls playerControls;

    private void Awake()
    {
        playerControls = new PlayerControls();
    }

    private void OnEnable()
    {
        playerControls.Player.Enable();
        playerControls.Player.Attack.performed += OnAttackPerformed;
    }

    private void OnDisable()
    {
        playerControls.Player.Attack.performed -= OnAttackPerformed;
        playerControls.Player.Disable();
    }

    private void OnAttackPerformed(InputAction.CallbackContext context)
    {
        Debug.Log("Attack!!");
    }
}