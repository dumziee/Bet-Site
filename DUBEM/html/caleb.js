function validation_for_signup()
{
                var check_username = /^[a-zA-Z0-9_]{3,16}$/;
                                if(document.signup.username.value=="")
                                {
                                                alert("please enter username");
                                                document.signup.username.focus();
                                                return false;
                                }
                                else if(check_username.test(document.signup.username.value) == false)
                                {
                                                alert('Invalid  username');
                                                document.signup.username.focus();
                                                return false;
                                }