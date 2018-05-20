/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCBitmojiBuilderListener.h>

@class NSString;

@interface SCBitmojiBuilderListenerAnnouncer : NSObject <SCBitmojiBuilderListener> {

	mutex _mutex;
	shared_ptr<std::__1::vector<__weak id<SCBitmojiBuilderListener>, std::__1::allocator<__weak id<SCBitmojiBuilderListener> > > >* _listeners;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)outfitPackDidChange;
-(NSString *)description;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

