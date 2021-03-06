/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCAdPreferencesService, SOJUAdAdPreferences, NSArray;

@interface SCAdPreferencesFeatureManager : NSObject {

	SCAdPreferencesService* _adPreferencesService;
	BOOL _shouldPersistScreenOnBackground;
	SOJUAdAdPreferences* _selectedAdPreferences;
	NSArray* _preferencesTags;

}

@property (nonatomic,readonly) SOJUAdAdPreferences * storedAdPreferences; 
@property (nonatomic,readonly) SOJUAdAdPreferences * selectedAdPreferences;              //@synthesize selectedAdPreferences=_selectedAdPreferences - In the implementation block
@property (nonatomic,readonly) NSArray * preferencesTags;                                //@synthesize preferencesTags=_preferencesTags - In the implementation block
@property (assign,nonatomic) BOOL shouldPersistScreenOnBackground;                       //@synthesize shouldPersistScreenOnBackground=_shouldPersistScreenOnBackground - In the implementation block
-(SOJUAdAdPreferences *)storedAdPreferences;
-(void)setStoredAdPreferences:(SOJUAdAdPreferences *)arg1 ;
-(void)_updateAdPreferences:(id)arg1 ;
-(id)initWithAdPreferencesService:(id)arg1 ;
-(void)turnOnAudienceMatch;
-(void)turnOffAudienceMatch;
-(void)turnOnExternalActivityMatch;
-(void)turnOffExternalActivityMatch;
-(void)reloadSelectedAdPreferences;
-(void)updateServerAdPreferencesIfNecessary;
-(SOJUAdAdPreferences *)selectedAdPreferences;
-(NSArray *)preferencesTags;
-(BOOL)shouldPersistScreenOnBackground;
-(void)setShouldPersistScreenOnBackground:(BOOL)arg1 ;
@end

