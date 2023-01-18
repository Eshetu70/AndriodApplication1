package com.example.inclass02;

import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.widget.ButtonBarLayout;

import android.os.Bundle;
import android.util.Log;
import android.view.KeyEvent;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
      String TAG ="Demo";
      TextView ticketID;
      TextView textViewdiscount, textView3Price;
      Button button5dis, button10dis, button15dis, button20dis, clearid, button50dis, buton;
      EditText editTextNumber;
      ButtonBarLayout Butt;
    private double value=0, value2=0, input=0;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        ticketID =findViewById(R.id.ticketID);
        editTextNumber =findViewById(R.id.editTextNumber);
        textViewdiscount =findViewById(R.id.textViewdiscount);
        textView3Price =findViewById(R.id.textView3Price);
        button5dis =findViewById(R.id.button5dis);
        button10dis =findViewById(R.id.button10dis);
        button15dis =findViewById(R.id.button15dis);
        button20dis =findViewById(R.id.button20dis);
        button50dis =findViewById(R.id.button50dis);
        clearid =findViewById(R.id.clearid);


button5dis.setOnClickListener(new View.OnClickListener() {
    @Override
    public void onClick(View view) {
        input = Double.parseDouble(editTextNumber.getText().toString());
        value = input * 0.05;
        value2 = input - value;
        textViewdiscount.setText("Discount %:"+Double.toString(value));
        textView3Price.setText("Discounted Price:"+Double.toString(value2));
    }
});
button10dis.setOnClickListener(new View.OnClickListener() {
    @Override
    public void onClick(View view) {
        input = Double.parseDouble(editTextNumber.getText().toString());
        value = input * 0.1;
        value2 = input - value;
        textViewdiscount.setText("Discount %:"+Double.toString(value));
        textView3Price.setText("Discounted Price:"+ Double.toString(value2));

    }
});
button15dis.setOnClickListener(new View.OnClickListener() {
    @Override
    public void onClick(View view) {
        input = Double.parseDouble(editTextNumber.getText().toString());
        value = input * 0.15;
        value2 = input - value;
        textViewdiscount.setText("Discount %:"+Double.toString(value));
        textView3Price.setText("Discounted Price:"+ Double.toString(value2));

    }
});
button20dis.setOnClickListener(new View.OnClickListener() {
    @Override
    public void onClick(View view) {
        input = Double.parseDouble(editTextNumber.getText().toString());
        value = input * 0.2;
        value2 = input - value;
        textViewdiscount.setText("Discount %:"+Double.toString(value));
        textView3Price.setText("Discounted Price:"+ Double.toString(value2));
    }
});
button50dis.setOnClickListener(new View.OnClickListener() {
    @Override
    public void onClick(View view) {
        input = Double.parseDouble(editTextNumber.getText().toString());
        value = input * 0.5;
        value2 = input - value;
        textViewdiscount.setText("Discount %:"+Double.toString(value));
        textView3Price.setText("Discounted Price:"+ Double.toString(value2));
    }
});
        clearid.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                textViewdiscount.setText("Discount %:");
                textView3Price.setText("Discounted Price:");

            }
        });
    }

}