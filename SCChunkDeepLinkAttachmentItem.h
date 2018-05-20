/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChunkItem.h>
#import <Snapchat/MediaDataSource.h>

@class NSData, NSString, NSNumber, Media, NSURL;

@interface SCChunkDeepLinkAttachmentItem : SCChunkItem <MediaDataSource> {

	NSData* _appIconImageDataToSave;
	NSString* _uri;
	NSNumber* _appId;
	NSString* _appTitle;
	Media* _appIconImageMedia;
	Media* _inAppBackgroundImageMedia;
	NSURL* _webviewFallbackUrl;
	long long _deepLinkFallbackType;

}

@property (nonatomic,copy,readonly) NSString * uri;                            //@synthesize uri=_uri - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * appId;                          //@synthesize appId=_appId - In the implementation block
@property (nonatomic,copy,readonly) NSString * appTitle;                       //@synthesize appTitle=_appTitle - In the implementation block
@property (nonatomic,readonly) Media * appIconImageMedia;                      //@synthesize appIconImageMedia=_appIconImageMedia - In the implementation block
@property (nonatomic,readonly) Media * inAppBackgroundImageMedia;              //@synthesize inAppBackgroundImageMedia=_inAppBackgroundImageMedia - In the implementation block
@property (nonatomic,copy,readonly) NSURL * webviewFallbackUrl;                //@synthesize webviewFallbackUrl=_webviewFallbackUrl - In the implementation block
@property (nonatomic,readonly) long long deepLinkFallbackType;                 //@synthesize deepLinkFallbackType=_deepLinkFallbackType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)deepLinkFallbackType;
-(id)cacheMediaIds;
-(BOOL)needsAuthToFetch;
-(id)mediaIdForMedia:(id)arg1 ;
-(id)decryptData:(id)arg1 forMedia:(id)arg2 ;
-(id)encryptionDictionaryForMedia:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2 ;
-(void)saveMediaToCache;
-(BOOL)imageMediaExistsInCache;
-(id)extractImageDataForMediaKey:(id)arg1 deepLinkAttachmentProperties:(id)arg2 chunkDictionary:(id)arg3 ;
-(void)ensureNonNilMediaObjects;
-(Media *)appIconImageMedia;
-(Media *)inAppBackgroundImageMedia;
-(NSURL *)webviewFallbackUrl;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)appId;
-(BOOL)persist;
-(NSString *)appTitle;
-(NSString *)uri;
-(BOOL)encrypt;
-(id)requestContexts;
@end
