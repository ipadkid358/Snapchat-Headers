/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:55 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUSecurityMotionDataBlock.h>
@class NSNumber;


@protocol SOJUSecurityMotionDataBlock <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSNumber * timestamp; 
@property (nonatomic,copy,readonly) NSNumber * x; 
@property (nonatomic,copy,readonly) NSNumber * y; 
@property (nonatomic,copy,readonly) NSNumber * z; 
@required
-(NSNumber *)timestamp;
-(NSNumber *)x;
-(NSNumber *)y;
-(NSNumber *)z;

@end


@class NSNumber, NSString;

@interface SOJUSecurityMotionDataBlock : NSObject <SOJUSecurityMotionDataBlock> {

	NSNumber* _timestamp;
	NSNumber* _x;
	NSNumber* _y;
	NSNumber* _z;

}

@property (nonatomic,copy,readonly) NSNumber * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (x,nonatomic,copy,readonly) NSNumber * x;                    //@synthesize x=_x - In the implementation block
@property (y,nonatomic,copy,readonly) NSNumber * y;                    //@synthesize y=_y - In the implementation block
@property (z,nonatomic,copy,readonly) NSNumber * z;                    //@synthesize z=_z - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(long long)timestampValue;
-(float)zValue;
-(id)initWithTimestamp:(id)arg1 x:(id)arg2 y:(id)arg3 z:(id)arg4 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSNumber *)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)x;
-(NSNumber *)y;
-(NSNumber *)z;
-(id)toDictionary;
-(float)xValue;
-(float)yValue;
@end

