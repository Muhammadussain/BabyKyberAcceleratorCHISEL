/* SystemVerilog Testbench for Top Module
   Created By Hamna Mohiuddin @hamnamohi as a Google Summer of Code 2024 Project. */

`timescale 1ns / 1ps

module Top_tb;

    // Testbench signals
    logic clk;
    logic rst_n;
    logic enable;
    logic signed [31:0] data_Req;
    logic signed [31:0] addr_Req;
    logic wen_Req;
    logic [7:0] bytelane_Req;
    logic signed [31:0] data_Resp;

    // Expected message
    logic signed [31:0] expected_message = 32'h0000000B; // Message = 11

    // Instantiate the Top module
    Top dut (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .data_Req(data_Req),
        .addr_Req(addr_Req),
        .wen_Req(wen_Req),
        .bytelane_Req(bytelane_Req),
        .data_Resp(data_Resp)
    );

    // Clock generation: 10ns period
    initial begin
        clk = 0;
        forever #1 clk = ~clk;
    end

    // Test procedure
    initial begin
        // Initialize signals
        rst_n = 0;
        enable= 0;
        
        data_Req = 0;
        addr_Req = 0;
        wen_Req = 0;
        bytelane_Req = 8'hFF; // Full 32-bit write

        // Reset phase
        $display("Starting reset phase...");
        #20;
        rst_n = 1;
        #10;
        $display("Reset phase complete, rst_n = %b, data_Resp = %h", rst_n, data_Resp);

        // Test 1: Write to Key Generation inputs (A_reg, s_reg, e_reg)
        $display("Test 1: Writing Key Generation inputs...");
        enable= 1;
        // A_reg (4x4 matrix, values in [0, 16])
        write_data('h40007000, 32'h00000004); // A_t000
        write_data('h40007004, 32'h00000003); // A_t001
        write_data('h40007008, 32'h00000002); // A_t002
        write_data('h4000700C, 32'h00000001); // A_t003
        write_data('h40007010, 32'h00000005); // A_t010
        write_data('h40007014, 32'h00000006); // A_t011
        write_data('h40007018, 32'h00000007); // A_t012
        write_data('h4000701C, 32'h00000008); // A_t013
        write_data('h40007020, 32'h00000009); // A_t020
        write_data('h40007024, 32'h0000000A); // A_t021
        write_data('h40007028, 32'h0000000B); // A_t022
        write_data('h4000702C, 32'h0000000C); // A_t023
        write_data('h40007030, 32'h0000000D); // A_t030
        write_data('h40007034, 32'h0000000E); // A_t031
        write_data('h40007038, 32'h0000000F); // A_t032
        write_data('h4000703C, 32'h00000010); // A_t033

        // s_reg (2x4 vector, values in {-1, 0, 1}, -1 represented as 16 mod 17)
        write_data('h40007040, 32'h00000001); // s_00 = 1
        write_data('h40007044, 32'h00000010); // s_01 = -1 (16 mod 17)
        write_data('h40007048, 32'h00000000); // s_02 = 0
        write_data('h4000704C, 32'h00000001); // s_03 = 1
        write_data('h40007050, 32'h00000010); // s_10 = -1
        write_data('h40007054, 32'h00000000); // s_11 = 0
        write_data('h40007058, 32'h00000001); // s_12 = 1
        write_data('h4000705C, 32'h00000010); // s_13 = -1

        // e_reg (2x4 vector, values in {-1, 0, 1}, -1 represented as 16 mod 17)
        write_data('h40007060, 32'h00000000); // e_00 = 0
        write_data('h40007064, 32'h00000001); // e_01 = 1
        write_data('h40007068, 32'h00000010); // e_02 = -1
        write_data('h4000706C, 32'h00000000); // e_03 = 0
        write_data('h40007070, 32'h00000001); // e_10 = 1
        write_data('h40007074, 32'h00000010); // e_11 = -1
        write_data('h40007078, 32'h00000000); // e_12 = 0
        write_data('h4000707C, 32'h00000001); // e_13 = 1

        // Trigger Key Generation
        write_data('h40007164, 32'h00000000); // Trigger KeyGeneration
        #20;
        $display("Key Generation triggered");
        enable = 0;

        // Test 2: Read public_key
        $display("Test 2: Reading public_key...");
        read_data('h40007000, 32'h00000000); // public_key[0][0][0]
        read_data('h40007004, 32'h00000000); // public_key[0][0][1]
        read_data('h40007008, 32'h00000000); // public_key[0][0][2]
        read_data('h4000700C, 32'h00000000); // public_key[0][0][3]
        read_data('h40007010, 32'h00000000); // public_key[0][1][0]
        read_data('h40007014, 32'h00000000); // public_key[0][1][1]
        read_data('h40007018, 32'h00000000); // public_key[0][1][2]
        read_data('h4000701C, 32'h00000000); // public_key[0][1][3]
        read_data('h40007020, 32'h00000000); // public_key[0][2][0]
        read_data('h40007024, 32'h00000000); // public_key[0][2][1]
        read_data('h40007028, 32'h00000000); // public_key[0][2][2]
        read_data('h4000702C, 32'h00000000); // public_key[0][2][3]
        read_data('h40007030, 32'h00000000); // public_key[0][3][0]
        read_data('h40007034, 32'h00000000); // public_key[0][3][1]
        read_data('h40007038, 32'h00000000); // public_key[0][3][2]
        read_data('h4000703C, 32'h00000000); // public_key[0][3][3]
        read_data('h40007040, 32'h00000000); // public_key[1][0][0]
        read_data('h40007044, 32'h00000000); // public_key[1][0][1]
        read_data('h40007048, 32'h00000000); // public_key[1][0][2]
        read_data('h4000704C, 32'h00000000); // public_key[1][0][3]
        read_data('h40007050, 32'h00000000); // public_key[1][1][0]
        read_data('h40007054, 32'h00000000); // public_key[1][1][1]
        read_data('h40007058, 32'h00000000); // public_key[1][1][2]
        read_data('h4000705C, 32'h00000000); // public_key[1][1][3]

        // Test 3: Write to Encryption inputs (message, r, e1, e2)
        $display("Test 3: Writing Encryption inputs...");
        enable= 1;
        write_data('h40007080, expected_message); // message = 11
        // r (2x4 vector, values in {-1, 0, 1}, -1 represented as 16 mod 17)
        write_data('h40007084, 32'h00000010); // r_00 = -1
        write_data('h40007088, 32'h00000000); // r_01 = 0
        write_data('h4000708C, 32'h00000001); // r_02 = 1
        write_data('h40007090, 32'h00000010); // r_03 = -1
        write_data('h40007094, 32'h00000000); // r_10 = 0
        write_data('h40007098, 32'h00000001); // r_11 = 1
        write_data('h4000709C, 32'h00000010); // r_12 = -1
        write_data('h400070A0, 32'h00000000); // r_13 = 0
        // e1 (2x4 vector, values in {-1, 0, 1}, -1 represented as 16 mod 17)
        write_data('h400070A4, 32'h00000001); // e1_00 = 1
        write_data('h400070A8, 32'h00000000); // e1_01 = 0
        write_data('h400070AC, 32'h00000010); // e1_02 = -1
        write_data('h400070B0, 32'h00000001); // e1_03 = 1
        write_data('h400070B4, 32'h00000010); // e1_10 = -1
        write_data('h400070B8, 32'h00000000); // e1_11 = 0
        write_data('h400070BC, 32'h00000001); // e1_12 = 1
        write_data('h400070C0, 32'h00000010); // e1_13 = -1
        // e2 (1x4 vector, values in {-1, 0, 1}, -1 represented as 16 mod 17)
        write_data('h400070C4, 32'h00000000); // e2_0 = 0
        write_data('h400070C8, 32'h00000010); // e2_1 = -1
        write_data('h400070CC, 32'h00000001); // e2_2 = 1
        write_data('h400070D0, 32'h00000000); // e2_3 = 0

        // Trigger Encryption
        write_data('h40007168, 32'h00000000); // Trigger Encryption
        #20;
        $display("Encryption triggered");
        enable = 0;

        // Test 4: Read ciphertext
        $display("Test 4: Reading ciphertext...");
        read_data('h40007060, 32'h00000000); // ciphertext[0][0][0]
        read_data('h40007064, 32'h00000000); // ciphertext[0][0][1]
        read_data('h40007068, 32'h00000000); // ciphertext[0][0][2]
        read_data('h4000706C, 32'h00000000); // ciphertext[0][0][3]
        read_data('h40007070, 32'h00000000); // ciphertext[0][1][0]
        read_data('h40007074, 32'h00000000); // ciphertext[0][1][1]
        read_data('h40007078, 32'h00000000); // ciphertext[0][1][2]
        read_data('h4000707C, 32'h00000000); // ciphertext[0][1][3]
        read_data('h40007080, 32'h00000000); // ciphertext[1][0][0]
        read_data('h40007084, 32'h00000000); // ciphertext[1][0][1]
        read_data('h40007088, 32'h00000000); // ciphertext[1][0][2]
        read_data('h4000708C, 32'h00000000); // ciphertext[1][0][3]

        // Test 5: Trigger Decryption
        $display("Test 5: Triggering Decryption...");
        enable = 1;
        write_data('h4000716C, 32'h00000000); // Trigger Decryption
        #20;
        $display("Decryption triggered");
        enable = 0;

        // Test 6: Read message, decimal_value, and m_b
        $display("Test 6: Reading message, decimal_value, and m_b...");
        read_data('h40007090, expected_message); // message (expecting 11)
        read_data('h40007094, expected_message); // decimal_value (expecting 11)
        read_data('h40007104, expected_message); // m_b (expecting 11, sign-extended)

        // Test 7: Invalid address read
        $display("Test 7: Reading invalid address...");
        read_data('h40008000, 32'h00000000); // Should return 0 (default case)

        // Test 8: Verify enable signals isolation
        $display("Test 8: Testing enable signals isolation...");
        enable = 0;
       
        write_data('h40007000, 32'hDEADBEEF); // Should not write (no enable)
        write_data('h40007080, 32'hDEADBEEF); // Should not write (no enable)
        write_data('h4000716C, 32'hDEADBEEF); // Should not write (no enable)
        read_data('h40007090, expected_message); // message should still be 11

        // End simulation
        #100;
        $display("Simulation complete!");
        $finish;
    end

    // Task to write data
    task write_data(input logic [31:0] addr, input logic [31:0] data);
        @(posedge clk);
        addr_Req = addr;
        data_Req = data;
        wen_Req = 1;
        @(posedge clk);
        wen_Req = 0;
        $display("Write: addr = %h, data = %h, data_Resp = %h", addr, data, data_Resp);
    endtask

    // Task to read data
    task read_data(input logic [31:0] addr, input logic [31:0] expected);
        @(posedge clk);
        addr_Req = addr;
        wen_Req = 0;
        @(posedge clk);
        $display("Read: addr = %h, data_Resp = %h, expected = %h", addr, data_Resp, expected);
        // Assertion to check data_Resp
        assert(data_Resp !== 'x) else $warning("data_Resp is undefined at addr %h", addr);
        if (addr == 'h40007090 || addr == 'h40007094 || addr == 'h40007104) begin
            assert(data_Resp == expected) else $error("Decrypted output mismatch at addr %h: got %h, expected %h", addr, data_Resp, expected);
        end
    endtask

endmodule
