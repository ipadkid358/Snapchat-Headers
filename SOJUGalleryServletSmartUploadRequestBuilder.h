/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface SOJUGalleryServletSmartUploadRequestBuilder : NSObject {

	NSString* _mediaId;
	NSString* _mediaUrlDeprecated;
	NSNumber* _mediaType;
	NSString* _mediaKey;
	NSString* _mediaIv;
	NSString* _usernameDeprecated;
	NSString* _snapId;

}
+(id)withJUGalleryServletSmartUploadRequest:(id)arg1 ;
-(id)setSnapId:(id)arg1 ;
-(id)setMediaTypeValue:(int)arg1 ;
-(id)setMediaKey:(id)arg1 ;
-(id)setMediaIv:(id)arg1 ;
-(id)setMediaUrlDeprecated:(id)arg1 ;
-(id)setUsernameDeprecated:(id)arg1 ;
-(id)build;
-(id)setMediaType:(id)arg1 ;
-(id)setMediaId:(id)arg1 ;
@end

