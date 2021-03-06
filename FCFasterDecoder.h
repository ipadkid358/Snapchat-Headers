/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCFasterDecoder <NSObject>
@required
-(char)decodeSInt8;
-(short)decodeSInt16;
-(int)decodeSInt32;
-(long long)decodeSInt64;
-(unsigned char)decodeUInt8;
-(unsigned short)decodeUInt16;
-(float)decodeFloat32;
-(double)decodeFloat64;
-(NSRange*)decodeRange;
-(CGVector*)decodeVector;
-(CGAffineTransform*)decodeAffineTransform;
-(CATransform3D*)decode3DTransform;
-(SCD_Struct_LS191*)decodeCMTime;
-(SCD_Struct_BC197*)decodeCMTimeRange;
-(SCD_Struct_FC216*)decodeCMTimeMapping;
-(UIEdgeInsets*)decodeUIEdgeInsets;
-(CGPoint*)decodePoint;
-(CGSize*)decodeSize;
-(CGRect*)decodeRect;
-(BOOL)decodeBool;
-(unsigned)decodeUInt32;
-(unsigned long long)decodeUInt64;
-(id)decodeObject;

@end

