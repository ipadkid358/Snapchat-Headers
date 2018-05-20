/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCService.h>

@class SCQueuePerformer, NSArray, NSString;

@interface SCGallerySuggestedQueryUpdater : NSObject <SCService> {

	mutex _mutex;
	SCQueuePerformer* _performer;
	NSArray* _suggestedQueries;
	BOOL _loaded;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultLongRunningNotifier;
+(id)defaultImmediateNotifier;
-(id)dedicatedQueue;
-(void)runWithServiceTerm:(id)arg1 ;
-(void)setSuggestedQueries:(id)arg1 ;
-(void)_saveClientConfigResponseToFile:(id)arg1 ;
-(id)_readQueriesFromFile;
-(id)_clientConfigResponseFileURL;
-(id)suggestedQueries;
-(id)init;
@end
