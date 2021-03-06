/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, NSDictionary, NSURL;

@interface SCDeepLinkURL : NSObject {

	BOOL _isFormatValid;
	NSArray* _pathComponents;
	BOOL _isHTTPLink;
	NSString* _path;
	NSString* _clickId;
	NSString* _shareId;
	NSDictionary* _queryParams;
	NSString* _linkId;
	NSString* _referrer;
	NSURL* _url;
	NSString* _sourceApplication;

}

@property (nonatomic,copy,readonly) NSString * path;                           //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * clickId;                                 //@synthesize clickId=_clickId - In the implementation block
@property (nonatomic,copy) NSString * shareId;                                 //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * queryParams;                //@synthesize queryParams=_queryParams - In the implementation block
@property (nonatomic,copy) NSString * linkId;                                  //@synthesize linkId=_linkId - In the implementation block
@property (nonatomic,copy,readonly) NSString * referrer;                       //@synthesize referrer=_referrer - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                    //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL isHTTPLink;                                //@synthesize isHTTPLink=_isHTTPLink - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceApplication;              //@synthesize sourceApplication=_sourceApplication - In the implementation block
+(id)deepLinkURLWithLinkId:(id)arg1 ;
+(id)deepLinkURLWithScanDataUUID:(id)arg1 ;
-(NSDictionary *)queryParams;
-(NSString *)linkId;
-(void)setLinkId:(NSString *)arg1 ;
-(id)pathComponentAtIndex:(unsigned long long)arg1 ;
-(id)pathComponentAtIndex:(unsigned long long)arg1 forceLowerCase:(BOOL)arg2 ;
-(id)initWithURL:(id)arg1 sourceApplication:(id)arg2 ;
-(BOOL)isHTTPLink;
-(NSString *)clickId;
-(void)setClickId:(NSString *)arg1 ;
-(BOOL)shouldDismissSearch;
-(NSString *)referrer;
-(id)description;
-(NSURL *)url;
-(BOOL)isValid;
-(NSString *)path;
-(NSString *)sourceApplication;
-(id)feature;
-(void)setShareId:(NSString *)arg1 ;
-(NSString *)shareId;
@end

