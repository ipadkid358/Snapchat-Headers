/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol BCOVMutableAnalytics <NSObject>
@property (nonatomic,copy) NSString * account; 
@property (nonatomic,copy) NSString * destination; 
@property (nonatomic,copy) NSString * source; 
@property (assign,getter=isUniqueIdentifierEnabled,nonatomic) BOOL uniqueIdentifierEnabled; 
@required
-(BOOL)isUniqueIdentifierEnabled;
-(void)setUniqueIdentifierEnabled:(BOOL)arg1;
-(void)setSource:(id)arg1;
-(NSString *)source;
-(NSString *)destination;
-(void)setDestination:(id)arg1;
-(NSString *)account;
-(void)setAccount:(id)arg1;

@end

