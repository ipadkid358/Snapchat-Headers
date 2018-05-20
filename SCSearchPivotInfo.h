/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, CLLocation, NSString;

@interface SCSearchPivotInfo : NSObject <NSCopying, NSCoding> {

	NSArray* _snapLabels;
	CLLocation* _pivotLocation;
	NSArray* _attachedStoryIds;
	NSString* _snapCaption;
	NSString* _venueId;
	NSString* _geoFilterId;
	NSArray* _entities;
	NSString* _originStoryId;
	NSString* _webAttachmentURL;
	NSString* _originSnapId;
	NSString* _inferredPlaceId;

}

@property (nonatomic,copy,readonly) NSArray * snapLabels;                     //@synthesize snapLabels=_snapLabels - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * pivotLocation;               //@synthesize pivotLocation=_pivotLocation - In the implementation block
@property (nonatomic,copy,readonly) NSArray * attachedStoryIds;               //@synthesize attachedStoryIds=_attachedStoryIds - In the implementation block
@property (nonatomic,copy,readonly) NSString * snapCaption;                   //@synthesize snapCaption=_snapCaption - In the implementation block
@property (nonatomic,copy,readonly) NSString * venueId;                       //@synthesize venueId=_venueId - In the implementation block
@property (nonatomic,copy,readonly) NSString * geoFilterId;                   //@synthesize geoFilterId=_geoFilterId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * entities;                       //@synthesize entities=_entities - In the implementation block
@property (nonatomic,copy,readonly) NSString * originStoryId;                 //@synthesize originStoryId=_originStoryId - In the implementation block
@property (nonatomic,copy,readonly) NSString * webAttachmentURL;              //@synthesize webAttachmentURL=_webAttachmentURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * originSnapId;                  //@synthesize originSnapId=_originSnapId - In the implementation block
@property (nonatomic,copy,readonly) NSString * inferredPlaceId;               //@synthesize inferredPlaceId=_inferredPlaceId - In the implementation block
-(NSString *)venueId;
-(NSString *)geoFilterId;
-(id)initWithSnapLabels:(id)arg1 pivotLocation:(id)arg2 attachedStoryIds:(id)arg3 snapCaption:(id)arg4 venueId:(id)arg5 geoFilterId:(id)arg6 entities:(id)arg7 originStoryId:(id)arg8 webAttachmentURL:(id)arg9 originSnapId:(id)arg10 inferredPlaceId:(id)arg11 ;
-(NSArray *)snapLabels;
-(CLLocation *)pivotLocation;
-(NSArray *)attachedStoryIds;
-(NSString *)snapCaption;
-(NSString *)originStoryId;
-(NSString *)webAttachmentURL;
-(NSString *)originSnapId;
-(NSString *)inferredPlaceId;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)entities;
@end

