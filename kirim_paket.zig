const std = @import("std");

const ErrorPengiriman = error {
    AlamatKosong,
    BeratInvalid,
    ServerInvalid,
};

const Status = enum {
    Menunggu,
    Dikirim,
    Terkirim,
    Gagal,
};

const Paket = struct {
    id:u32,
    alamat: []const u8,
    berat_kg:u16,
    status:Status,

    pub fn update_status(info_data_paket:*Paket,status_baru_paket:Status) void {
        info_data_paket.status = status_baru_paket;
    }
};

fn kirim_paket (paket :*Paket) ErrorPengiriman!void{
    if(paket.alamat.len == 0){
        paket.update_status(.Gagal);
        return ErrorPengiriman.AlamatKosong;
    }

    if (paket.berat_kg == 0){
        paket.update_status(.Gagal);
        return ErrorPengiriman.BeratInvalid;
    }
    if (std.crypto.random.int(u8) % 10 == 0){
        paket.update_status(.Gagal);
        return ErrorPengiriman.ServerInvalid;
    }

}
// example simulasi
pub fn main()!void{
    var paket = Paket{
        .id = 200,
        .alamat = "",
        .berat_kg = 6,
        .status = .Menunggu,
    };

    paket.update_status(.Dikirim);
    std.debug.print("kirim paket id {d}", .{paket.id});

    //pengiriman paket dan tangani eror nya
    kirim_paket(&paket) catch |Error_pengiriman| {
        std.debug.print("pengiriman paket dengan id {d} gagal dengan pesan error {s}\n",.{paket.id,@errorName(Error_pengiriman)});
};

    paket.update_status(.Gagal);

    switch (paket.status) {
        .Terkirim => std.debug.print("paket dengan id {d} terkirim ke alamat {s} \n", .{paket.id,paket.alamat}),
        .Gagal => std.debug.print("paket dengan id {d} gagal terkirim , ke alamat {s}\n",.{paket.id,paket.alamat}),
        else => unreachable,
    }
}
