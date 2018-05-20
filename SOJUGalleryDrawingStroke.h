/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUGalleryDrawingStroke.h>
@class NSNumber, NSArray, NSString;


@protocol SOJUGalleryDrawingStroke <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSNumber * color; 
@property (nonatomic,copy,readonly) NSNumber * strokeSize; 
@property (nonatomic,copy,readonly) NSArray * points; 
@property (nonatomic,copy,readonly) NSString * emoji; 
@property (nonatomic,copy,readonly) NSString * drawerType; 
@required
-(NSNumber *)strokeSize;
-(NSString *)drawerType;
-(NSString *)emoji;
-(NSNumber *)color;
-(NSArray *)points;

@end


@class NSNumber, NSArray, NSString;

@interface SOJUGalleryDrawingStroke : NSObject <SOJUGalleryDrawingStroke> {

	NSNumber* _color;
	NSNumber* _strokeSize;
	NSArray* _points;
	NSString* _emoji;
	NSString* _drawerType;

}

@property (nonatomic,copy,readonly) NSNumber * color;                   //@synthesize color=_color - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * strokeSize;              //@synthesize strokeSize=_strokeSize - In the implementation block
@property (nonatomic,copy,readonly) NSArray * points;                   //@synthesize points=_points - In the implementation block
@property (nonatomic,copy,readonly) NSString * emoji;                   //@synthesize emoji=_emoji - In the implementation block
@property (nonatomic,copy,readonly) NSString * drawerType;              //@synthesize drawerType=_drawerType - In the implementation block
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
-(double)strokeSizeValue;
-(long long)drawerTypeEnum;
-(NSNumber *)strokeSize;
-(NSString *)drawerType;
-(id)initWithColor:(id)arg1 strokeSize:(id)arg2 points:(id)arg3 emoji:(id)arg4 drawerType:(id)arg5 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)emoji;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)color;
-(NSArray *)points;
-(id)toDictionary;
-(int)colorValue;
@end

