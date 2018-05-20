/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUGalleryServletDefunctMedia.h>
@class NSString, NSNumber;


@protocol SOJUGalleryServletDefunctMedia <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * mediaId; 
@property (nonatomic,copy,readonly) NSNumber * defunctReason; 
@required
-(NSNumber *)defunctReason;
-(NSString *)mediaId;

@end


@class NSString, NSNumber;

@interface SOJUGalleryServletDefunctMedia : NSObject <SOJUGalleryServletDefunctMedia> {

	NSString* _mediaId;
	NSNumber* _defunctReason;

}

@property (nonatomic,copy,readonly) NSString * mediaId;                    //@synthesize mediaId=_mediaId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * defunctReason;              //@synthesize defunctReason=_defunctReason - In the implementation block
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
-(int)defunctReasonValue;
-(long long)defunctReasonEnum;
-(NSNumber *)defunctReason;
-(id)initWithMediaId:(id)arg1 defunctReason:(id)arg2 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
-(NSString *)mediaId;
@end
