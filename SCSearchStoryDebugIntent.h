/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchIntent.h>

@class NSDictionary, NSString;

@interface SCSearchStoryDebugIntent : NSObject <SCSearchIntent> {

	NSDictionary* _debugInfo;
	NSString* _suggestId;
	NSString* _debugId;

}

@property (nonatomic,retain) NSDictionary * debugInfo;              //@synthesize debugInfo=_debugInfo - In the implementation block
@property (nonatomic,retain) NSString * suggestId;                  //@synthesize suggestId=_suggestId - In the implementation block
@property (nonatomic,retain) NSString * debugId;                    //@synthesize debugId=_debugId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDebugInfo:(NSDictionary *)arg1 ;
-(id)initWithDebugInfo:(id)arg1 debugId:(id)arg2 suggestId:(id)arg3 ;
-(NSString *)suggestId;
-(void)setSuggestId:(NSString *)arg1 ;
-(NSString *)debugId;
-(void)setDebugId:(NSString *)arg1 ;
-(NSDictionary *)debugInfo;
@end

