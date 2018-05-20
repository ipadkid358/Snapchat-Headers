/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSCache, SCSessionRequestManager;

@interface SCRankingAutoSuggestDataProvider : NSObject {

	NSString* _requestKey;
	NSCache* _cache;
	SCSessionRequestManager* _requestManager;

}
-(id)cachedSuggestionsWithKeyword:(id)arg1 ;
-(void)fetchSuggestionsWithKeyword:(id)arg1 successBlock:(/*^block*/id)arg2 ;
-(void)fetchFromNetwork:(id)arg1 location:(id)arg2 successBlock:(/*^block*/id)arg3 ;
-(void)parseSuggestions:(id)arg1 keyword:(id)arg2 location:(id)arg3 successBlock:(/*^block*/id)arg4 ;
-(void)prefetchSuggestions;
-(void)cancel;
-(id)initWithRequestManager:(id)arg1 ;
@end
