/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:56 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUStoryExtra.h>
@class NSNumber;


@protocol SOJUStoryExtra <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSNumber * viewCount; 
@property (nonatomic,copy,readonly) NSNumber * screenshotCount; 
@property (nonatomic,copy,readonly) NSNumber * screenCaptureShotCount; 
@property (nonatomic,copy,readonly) NSNumber * screenCaptureRecordingCount; 
@property (nonatomic,copy,readonly) NSNumber * snapSaveCount; 
@required
-(NSNumber *)screenshotCount;
-(NSNumber *)screenCaptureShotCount;
-(NSNumber *)screenCaptureRecordingCount;
-(NSNumber *)snapSaveCount;
-(NSNumber *)viewCount;

@end


@class NSNumber, NSString;

@interface SOJUStoryExtra : NSObject <SOJUStoryExtra> {

	NSNumber* _viewCount;
	NSNumber* _screenshotCount;
	NSNumber* _screenCaptureShotCount;
	NSNumber* _screenCaptureRecordingCount;
	NSNumber* _snapSaveCount;

}

@property (nonatomic,copy,readonly) NSNumber * viewCount;                                //@synthesize viewCount=_viewCount - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * screenshotCount;                          //@synthesize screenshotCount=_screenshotCount - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * screenCaptureShotCount;                   //@synthesize screenCaptureShotCount=_screenCaptureShotCount - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * screenCaptureRecordingCount;              //@synthesize screenCaptureRecordingCount=_screenCaptureRecordingCount - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * snapSaveCount;                            //@synthesize snapSaveCount=_snapSaveCount - In the implementation block
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
-(int)screenshotCountValue;
-(int)screenCaptureShotCountValue;
-(int)screenCaptureRecordingCountValue;
-(NSNumber *)screenshotCount;
-(NSNumber *)screenCaptureShotCount;
-(NSNumber *)screenCaptureRecordingCount;
-(int)viewCountValue;
-(int)snapSaveCountValue;
-(NSNumber *)snapSaveCount;
-(id)initWithViewCount:(id)arg1 screenshotCount:(id)arg2 screenCaptureShotCount:(id)arg3 screenCaptureRecordingCount:(id)arg4 snapSaveCount:(id)arg5 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)viewCount;
-(id)toDictionary;
@end

