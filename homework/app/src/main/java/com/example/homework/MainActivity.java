package com.example.homework;

import androidx.appcompat.app.AppCompatActivity;
import androidx.constraintlayout.widget.ConstraintLayout;

import android.graphics.Color;
import android.os.Bundle;
import android.widget.RadioGroup;

public class MainActivity extends AppCompatActivity {
     final String TAG ="demo";
      ConstraintLayout rootView;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        rootView  =findViewById(R.id.rootView);

        RadioGroup radioGroup = findViewById(R.id.radiogroup);

        radioGroup.setOnCheckedChangeListener(new RadioGroup.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(RadioGroup radioGroup, int i) {
                if(i==R.id.radioButtonred){
                    rootView.setBackgroundColor(Color.RED);
                } else if (i == R.id.radioButtonblue) {
                    rootView.setBackgroundColor(Color.BLUE);

                }
                else if (i == R.id.radioButtongreen) {
                    rootView.setBackgroundColor(Color.BLACK);

                }
            }
        });

    }
}