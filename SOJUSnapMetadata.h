/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:56 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUSnapMetadata.h>
@class NSNumber, NSString, SOJUSnapAttachment, NSArray, SOJUMultiSnapMetadata;


@protocol SOJUSnapMetadata <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSNumber * isReply; 
@property (nonatomic,copy,readonly) NSNumber * cameraFrontFacing; 
@property (nonatomic,copy,readonly) NSString * orientation; 
@property (nonatomic,copy,readonly) NSString * countryCode; 
@property (nonatomic,copy,readonly) NSString * filterId; 
@property (nonatomic,copy,readonly) NSString * lensId; 
@property (nonatomic,copy,readonly) NSString * encGeoData; 
@property (nonatomic,copy,readonly) NSString * captionTextDeprecated; 
@property (nonatomic,copy,readonly) SOJUSnapAttachment * snapAttachmentDeprecated; 
@property (nonatomic,copy,readonly) NSString * venueId; 
@property (nonatomic,copy,readonly) NSArray * snapAttachments; 
@property (nonatomic,copy,readonly) NSNumber * isInfiniteDuration; 
@property (nonatomic,copy,readonly) SOJUMultiSnapMetadata * multiSnapMetadata; 
@property (nonatomic,copy,readonly) NSString * checksum; 
@property (nonatomic,copy,readonly) NSString * contextHint; 
@property (nonatomic,copy,readonly) NSString * animatedSnapType; 
@property (nonatomic,copy,readonly) NSString * lensMetadata; 
@property (nonatomic,copy,readonly) NSString * sendSource; 
@property (nonatomic,copy,readonly) NSNumber * captureDate; 
@property (nonatomic,copy,readonly) NSString * unlockablesSnapInfo; 
@required
-(NSString *)lensId;
-(NSString *)encGeoData;
-(NSNumber *)cameraFrontFacing;
-(NSArray *)snapAttachments;
-(NSString *)filterId;
-(NSString *)venueId;
-(NSString *)contextHint;
-(NSString *)animatedSnapType;
-(NSString *)captionTextDeprecated;
-(SOJUSnapAttachment *)snapAttachmentDeprecated;
-(SOJUMultiSnapMetadata *)multiSnapMetadata;
-(NSString *)lensMetadata;
-(NSString *)sendSource;
-(NSString *)unlockablesSnapInfo;
-(NSString *)orientation;
-(NSString *)checksum;
-(NSString *)countryCode;
-(NSNumber *)isReply;
-(NSNumber *)captureDate;
-(NSNumber *)isInfiniteDuration;

@end


@class NSNumber, NSString, SOJUSnapAttachment, NSArray, SOJUMultiSnapMetadata;

@interface SOJUSnapMetadata : NSObject <SOJUSnapMetadata> {

	NSNumber* _isReply;
	NSNumber* _cameraFrontFacing;
	NSString* _orientation;
	NSString* _countryCode;
	NSString* _filterId;
	NSString* _lensId;
	NSString* _encGeoData;
	NSString* _captionTextDeprecated;
	SOJUSnapAttachment* _snapAttachmentDeprecated;
	NSString* _venueId;
	NSArray* _snapAttachments;
	NSNumber* _isInfiniteDuration;
	SOJUMultiSnapMetadata* _multiSnapMetadata;
	NSString* _checksum;
	NSString* _contextHint;
	NSString* _animatedSnapType;
	NSString* _lensMetadata;
	NSString* _sendSource;
	NSNumber* _captureDate;
	NSString* _unlockablesSnapInfo;

}

@property (nonatomic,copy,readonly) NSNumber * isReply;                                         //@synthesize isReply=_isReply - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * cameraFrontFacing;                               //@synthesize cameraFrontFacing=_cameraFrontFacing - In the implementation block
@property (nonatomic,copy,readonly) NSString * orientation;                                     //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;                                     //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * filterId;                                        //@synthesize filterId=_filterId - In the implementation block
@property (nonatomic,copy,readonly) NSString * lensId;                                          //@synthesize lensId=_lensId - In the implementation block
@property (nonatomic,copy,readonly) NSString * encGeoData;                                      //@synthesize encGeoData=_encGeoData - In the implementation block
@property (nonatomic,copy,readonly) NSString * captionTextDeprecated;                           //@synthesize captionTextDeprecated=_captionTextDeprecated - In the implementation block
@property (nonatomic,copy,readonly) SOJUSnapAttachment * snapAttachmentDeprecated;              //@synthesize snapAttachmentDeprecated=_snapAttachmentDeprecated - In the implementation block
@property (nonatomic,copy,readonly) NSString * venueId;                                         //@synthesize venueId=_venueId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * snapAttachments;                                  //@synthesize snapAttachments=_snapAttachments - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isInfiniteDuration;                              //@synthesize isInfiniteDuration=_isInfiniteDuration - In the implementation block
@property (nonatomic,copy,readonly) SOJUMultiSnapMetadata * multiSnapMetadata;                  //@synthesize multiSnapMetadata=_multiSnapMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * checksum;                                        //@synthesize checksum=_checksum - In the implementation block
@property (nonatomic,copy,readonly) NSString * contextHint;                                     //@synthesize contextHint=_contextHint - In the implementation block
@property (nonatomic,copy,readonly) NSString * animatedSnapType;                                //@synthesize animatedSnapType=_animatedSnapType - In the implementation block
@property (nonatomic,copy,readonly) NSString * lensMetadata;                                    //@synthesize lensMetadata=_lensMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * sendSource;                                      //@synthesize sendSource=_sendSource - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * captureDate;                                     //@synthesize captureDate=_captureDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * unlockablesSnapInfo;                             //@synthesize unlockablesSnapInfo=_unlockablesSnapInfo - In the implementation block
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
-(NSString *)lensId;
-(NSString *)encGeoData;
-(long long)orientationEnum;
-(BOOL)cameraFrontFacingValue;
-(NSNumber *)cameraFrontFacing;
-(NSArray *)snapAttachments;
-(NSString *)filterId;
-(BOOL)isInfiniteDurationValue;
-(long long)animatedSnapTypeEnum;
-(NSString *)venueId;
-(NSString *)contextHint;
-(NSString *)animatedSnapType;
-(NSString *)captionTextDeprecated;
-(BOOL)isReplyValue;
-(long long)sendSourceEnum;
-(long long)captureDateValue;
-(SOJUSnapAttachment *)snapAttachmentDeprecated;
-(SOJUMultiSnapMetadata *)multiSnapMetadata;
-(NSString *)lensMetadata;
-(NSString *)sendSource;
-(NSString *)unlockablesSnapInfo;
-(id)initWithIsReply:(id)arg1 cameraFrontFacing:(id)arg2 orientation:(id)arg3 countryCode:(id)arg4 filterId:(id)arg5 lensId:(id)arg6 encGeoData:(id)arg7 captionTextDeprecated:(id)arg8 snapAttachmentDeprecated:(id)arg9 venueId:(id)arg10 snapAttachments:(id)arg11 isInfiniteDuration:(id)arg12 multiSnapMetadata:(id)arg13 checksum:(id)arg14 contextHint:(id)arg15 animatedSnapType:(id)arg16 lensMetadata:(id)arg17 sendSource:(id)arg18 captureDate:(id)arg19 unlockablesSnapInfo:(id)arg20 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)orientation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)checksum;
-(NSString *)countryCode;
-(NSNumber *)isReply;
-(NSNumber *)captureDate;
-(NSNumber *)isInfiniteDuration;
-(id)toDictionary;
@end

